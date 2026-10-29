__int64 __fastcall sub_24580(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(__int64, int); // rax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // rdi
  __int64 (__fastcall *v22)(__int64, int, int); // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 (__fastcall *v27)(__int64, int, int); // rax
  int v28; // eax
  unsigned __int64 *v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // [rsp+8h] [rbp-1F0h]
  unsigned int v33; // [rsp+8h] [rbp-1F0h]
  int v34; // [rsp+14h] [rbp-1E4h]
  __int64 v35; // [rsp+20h] [rbp-1D8h]
  __int64 v36; // [rsp+28h] [rbp-1D0h]
  __int64 v37; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v38; // [rsp+38h] [rbp-1C0h] BYREF
  char v39; // [rsp+48h] [rbp-1B0h]
  __int128 v40; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-198h]
  __int64 v42; // [rsp+68h] [rbp-190h]
  __int64 v43; // [rsp+70h] [rbp-188h]
  char v44; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+1B8h] [rbp-40h] BYREF

  v4 = *(_QWORD **)a4;
  v45 = __readfsqword(0x28u);
  v6 = *v4;
  if ( *a3 != *v4 )
  {
    v35 = sub_26410(a2[4], *v4);
    if ( BYTE4(v35) )
    {
      if ( (_DWORD)v35 != (unsigned int)sub_26300(a2[4]) )
      {
        v11 = a2[4];
        v12 = v11 + 392;
        v13 = *(_QWORD *)(v11 + 400);
        if ( v13 )
        {
          v14 = v12;
          do
          {
            v15 = *(_QWORD *)(v13 + 16);
            if ( (int)v35 <= *(_DWORD *)(v13 + 32) )
            {
              v14 = v13;
              v13 = *(_QWORD *)(v13 + 16);
            }
            else
            {
              v13 = *(_QWORD *)(v13 + 24);
            }
          }
          while ( v13 );
          if ( v12 != v14 && (int)v35 >= *(_DWORD *)(v14 + 32) )
          {
            v16 = (_QWORD *)a2[2];
            v34 = *(_DWORD *)(a4 + 8);
            v17 = *(__int64 (__fastcall **)(__int64, int))(*v16 + 104LL);
            if ( v17 == sub_23F50 )
              v18 = *(_DWORD *)(v16[9] + ((__int64)v34 << 6) + 48);
            else
              v18 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, int), __int64))v17)(
                      v16,
                      (unsigned int)v34,
                      sub_23F50,
                      v15);
            if ( v18 == 1 )
            {
              v26 = (_QWORD *)a2[2];
              v27 = *(__int64 (__fastcall **)(__int64, int, int))(*v26 + 120LL);
              if ( v27 == sub_23F80 )
                v28 = **(_DWORD **)(v26[9] + ((__int64)v34 << 6) + 40);
              else
                v28 = v27((__int64)v26, v34, 0);
              if ( v34 - 1 != v28 )
                goto LABEL_18;
              v41 = -1;
              v29 = (unsigned __int64 *)&v44;
              v42 = 0;
              v43 = 0;
              v40 = -1;
              do
              {
                *(_WORD *)v29 = 0;
                v29 += 5;
                *((_WORD *)v29 - 19) = 0;
                *((_WORD *)v29 - 18) = 0;
                *((_DWORD *)v29 - 2) = 0;
                *((_WORD *)v29 - 17) = 0;
                *((_OWORD *)v29 - 2) = 0;
                *(v29 - 2) = 0;
              }
              while ( v29 != &v45 );
              v33 = v34 - 1;
              if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int128 *, double))(*a2 + 24LL))(
                      *a2 + 24LL,
                      v6,
                      &v40,
                      0.0) )
                goto LABEL_18;
              if ( (v42 & 0xFFFD) != 0x10 )
                goto LABEL_18;
              v37 = sub_26410(a2[4], *(_QWORD *)(*(_QWORD *)(a2[2] + 72LL) + ((__int64)(int)v33 << 6)));
              if ( BYTE4(v37) )
                goto LABEL_18;
              v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a2[2] + 104LL))(a2[2], v33);
              --v34;
            }
            if ( v18 > 0 )
            {
LABEL_18:
              v19 = v18;
              v20 = 0;
              v32 = v19;
              do
              {
                v21 = (_QWORD *)a2[2];
                v22 = *(__int64 (__fastcall **)(__int64, int, int))(*v21 + 120LL);
                if ( v22 == sub_23F80 )
                {
                  v23 = v21[9];
                  v24 = *(_DWORD *)(*(_QWORD *)(v23 + ((__int64)v34 << 6) + 40) + 4 * v20);
                }
                else
                {
                  v24 = v22((__int64)v21, v34, v20);
                  v23 = *(_QWORD *)(a2[2] + 72LL);
                }
                v25 = (**(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD))(*a2 + 16LL))(
                        *a2 + 16LL,
                        *(_QWORD *)(v23 + ((__int64)v24 << 6) + 8),
                        *(_QWORD *)(v23 + ((__int64)v24 << 6)));
                v36 = sub_26460(a2[4], v25);
                if ( BYTE4(v36) )
                {
                  if ( (_DWORD)v36 == (_DWORD)v35 )
                    goto LABEL_23;
                  sub_24460((__int64)&v37, a2[4] + 128LL, v36, v35);
                  if ( v39 )
                  {
                    v30 = v37;
                    v31 = _mm_loadu_si128(&v38);
                    *(_BYTE *)(a1 + 24) = 1;
                    *(_QWORD *)a1 = v30;
                    *(__m128i *)(a1 + 8) = v31;
                    return a1;
                  }
                  if ( (_BYTE)v37 )
                  {
LABEL_23:
                    *a3 = *(_QWORD *)(*(_QWORD *)(a2[2] + 72LL) + ((__int64)v34 << 6));
                    break;
                  }
                }
                ++v20;
              }
              while ( v32 != v20 );
            }
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

