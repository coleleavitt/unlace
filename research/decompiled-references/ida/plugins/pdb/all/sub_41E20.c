__int64 *__fastcall sub_41E20(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7)
{
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbx
  void (**v17)(void); // rax
  void (****v18)(void); // rcx
  void (***v19)(void); // rdx
  __m128 v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // [rsp+0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+8h] [rbp-80h]
  char v34; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall **v35)(); // [rsp+20h] [rbp-68h] BYREF
  __int64 v36; // [rsp+28h] [rbp-60h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __m128i v38; // [rsp+38h] [rbp-50h] BYREF
  __int64 v39; // [rsp+48h] [rbp-40h]
  unsigned __int64 v40; // [rsp+58h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v10 = a5;
  if ( (debug & 0x40000) != 0 )
    sub_29350();
  v11 = sub_41C00(a2, a3, a3, a4, a5);
  v12 = v11;
  if ( !v11 )
  {
LABEL_22:
    *a1 = v12;
    return a1;
  }
  if ( v10 > 4 )
  {
    if ( v10 == 6 )
    {
      v13 = 7;
LABEL_8:
      v39 = v11;
      v38 = 0;
      v36 = 0;
      v35 = off_AA248;
      v37 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, __int64 (__fastcall ***)()))(**(_QWORD **)(v11 + 104) + 56LL))(
             *(_QWORD *)(v11 + 104),
             a3,
             a4,
             v13,
             &v35) )
      {
        v14 = v37;
        v35 = off_AA248;
        if ( v37 )
        {
          v15 = v38.m128i_i64[0];
          if ( v38.m128i_i64[0] )
          {
            v16 = 0;
            while ( 1 )
            {
              v18 = (void (****)(void))(v14 + 8 * v16);
              v19 = *v18;
              if ( !*v18 )
                goto LABEL_15;
              if ( (*((_DWORD *)v19 + 2))-- != 1 )
                goto LABEL_18;
              v17 = **v18;
              if ( (char *)*v17 != (char *)sub_241E0 )
              {
                (*v17)();
                v14 = v37;
                goto LABEL_19;
              }
              if ( *v18 )
              {
                v17[20]();
                v14 = v37;
LABEL_15:
                if ( v15 == ++v16 )
                  break;
              }
              else
              {
LABEL_18:
                v14 = v37;
LABEL_19:
                if ( v15 == ++v16 )
                  break;
              }
            }
          }
          v38.m128i_i64[0] = 0;
          qfree(v14);
        }
        v12 = 0;
      }
      else
      {
        v12 = operator new(0x38u);
        *(_DWORD *)(v12 + 8) = 1;
        v22 = _mm_loadh_ps((const double *)&v37);
        *(_QWORD *)v12 = &off_A9FC8;
        *(__m128 *)(v12 + 16) = v22;
        v23 = _mm_loadu_si128(&v38);
        *(_DWORD *)(v12 + 48) = -1;
        *(__m128i *)(v12 + 32) = v23;
      }
      goto LABEL_22;
    }
LABEL_34:
    if ( !under_debugger )
      interr(30171);
    BUG();
  }
  if ( v10 <= 2 )
  {
    if ( v10 == 2 )
    {
      v13 = 5;
      goto LABEL_8;
    }
    goto LABEL_34;
  }
  v24 = *(_QWORD *)(v11 + 104);
  v34 = 0;
  v32 = 0;
  v33 = 0;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64, __int64))(*(_QWORD *)v24 + 40LL))(
          v24,
          &v32,
          a3,
          a4);
  v26 = 0;
  if ( !v25 )
  {
    LODWORD(v36) = 0;
    v37 = 0;
    v38.m128i_i64[0] = (__int64)&v36;
    v38.m128i_i64[1] = (__int64)&v36;
    v39 = 0;
    sub_28080(&v35, &v32, 0.0, a7);
    v26 = operator new(0x60u);
    *(_DWORD *)(v26 + 8) = 1;
    v28 = v37;
    *(_QWORD *)(v26 + 16) = v12;
    *(_QWORD *)v26 = &off_AA200;
    v29 = v26 + 32;
    *(_DWORD *)(v26 + 32) = 0;
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = v26 + 32;
    *(_QWORD *)(v26 + 56) = v26 + 32;
    *(_QWORD *)(v26 + 64) = 0;
    *(_QWORD *)(v26 + 88) = 0;
    *(_OWORD *)(v26 + 72) = 0;
    if ( v28 )
    {
      v30 = _mm_loadh_ps((const double *)v38.m128i_i64);
      *(_DWORD *)(v26 + 32) = v36;
      v31 = v38.m128i_i64[1];
      *(__m128 *)(v26 + 40) = v30;
      *(_QWORD *)(v26 + 56) = v31;
      *(_QWORD *)(v28 + 8) = v29;
      v37 = 0;
      *(_QWORD *)(v26 + 64) = v39;
      v38.m128i_i64[0] = (__int64)&v36;
      v38.m128i_i64[1] = (__int64)&v36;
      v39 = 0;
    }
    *(_QWORD *)(v26 + 80) = v29;
    sub_28C40(nullptr);
  }
  v27 = v32;
  *a1 = v26;
  if ( v27 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v27);
  }
  return a1;
}

