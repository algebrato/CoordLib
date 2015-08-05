#ifndef Coord_h
#define Coord_h


class Coord {
	private:
		float _k;  //rapporto tempo siderale/tempo solare
		float _t0; //timestamp osservazioni
		bool _isSetR1, _isSetR2, _isSetR3;
		float _lmn1[3], _LMN1[3], _lmn2[3], _LMN2[3], _lmn3[3], _LMN3[3];
		float _T[3][3];
		float _iT[3][3];
		void _setT();
		void _setEVC(float ar, float dec, float t, float* EVC);
		void _setHVC(float ac, float alt, float* HVC);
		

		void _inv(float m[3][3], float res[3][3]);
		void _m_prod(float m1[3][3], float m2[3][3], float res[3][3]);	
	public:
		Coord();
		void setTime(float t0);
		void setRef_1(float ar, float dec, float t, float ac, float alt);
		void setRef_2(float ar, float dec, float t, float ac, float alt);
		void setRef_3(float ar, float dec, float t, float ac, float alt);
		bool isConfigured();
		void autoRef_3();


		void getHCoords(float ar, float dec, float t, float *ac, float *alt);
		void getECoords(float ac, float alt, float t, float *ar, float *dec);
};
#endif




