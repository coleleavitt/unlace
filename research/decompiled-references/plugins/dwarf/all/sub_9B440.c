__int64 __fastcall sub_9B440(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r15d
  __int64 v9; // r13
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r9
  unsigned __int64 *v15; // r11
  unsigned __int64 *v16; // r9
  unsigned __int64 *v17; // r10
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 *v21; // r12
  unsigned __int64 *v22; // rax
  __int64 v23; // rax
  unsigned __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  const __m128i *v28; // rcx
  __int64 v29; // rax
  __m128i v30; // xmm0
  unsigned __int64 v32; // [rsp+0h] [rbp-178h]
  __int64 v33; // [rsp+8h] [rbp-170h]
  __m128i v34; // [rsp+10h] [rbp-168h] BYREF
  unsigned __int64 v35; // [rsp+20h] [rbp-158h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-150h]
  __int64 v37[4]; // [rsp+30h] [rbp-148h] BYREF
  __int128 v38; // [rsp+50h] [rbp-128h]
  __int128 v39; // [rsp+60h] [rbp-118h]
  __int64 v40; // [rsp+70h] [rbp-108h]
  __int128 v41; // [rsp+78h] [rbp-100h]
  __int64 v42; // [rsp+88h] [rbp-F0h]
  __int128 v43; // [rsp+90h] [rbp-E8h]
  __int64 v44; // [rsp+C8h] [rbp-B0h]
  __int128 v45; // [rsp+D0h] [rbp-A8h]
  __int64 v46; // [rsp+E0h] [rbp-98h]
  __int128 v47; // [rsp+E8h] [rbp-90h]
  int v48; // [rsp+104h] [rbp-74h]
  __int64 v49; // [rsp+108h] [rbp-70h]
  unsigned __int64 v50; // [rsp+110h] [rbp-68h]
  __int64 v51; // [rsp+118h] [rbp-60h]
  int v52; // [rsp+120h] [rbp-58h]
  __int64 v53; // [rsp+128h] [rbp-50h]
  __int64 v54; // [rsp+130h] [rbp-48h]
  unsigned __int64 v55; // [rsp+138h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = off_C9528;
  *(_DWORD *)(v6 + 8) = 1;
  *(_OWORD *)(v6 + 16) = 0;
  v37[3] = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v48 = 0;
  v50 = 0x8000000000000000LL;
  v52 = -1;
  v37[0] = v6;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  LOBYTE(v7) = sub_98E20(a3, v37);
  v8 = v7;
  if ( (_BYTE)v7 )
  {
    v9 = v37[0];
    v34 = 0;
    LOBYTE(v10) = sub_945B0(v37, &v34, 49);
    v8 = v10;
    if ( (_BYTE)v10 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(v54 + 48))(*(_QWORD *)(v9 + 24));
      v12 = sub_94EA0(*(_QWORD **)(v9 + 16), *(_QWORD *)(v9 + 24), v34.m128i_i64, v11 != 0);
      v32 = v13;
      if ( (v12 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v12 != -1 )
      {
        v14 = *(unsigned __int64 **)a4;
        v15 = &v35;
        if ( *(_QWORD *)a4 == *(_QWORD *)a4 + 16LL * *(_QWORD *)(a4 + 8) )
          goto LABEL_13;
        while ( 1 )
        {
          v35 = v12;
          v36 = v32;
          if ( !(unsigned int)sub_849A0(v15, v14) )
            break;
          v14 = v16 + 2;
          if ( v17 == v14 )
            goto LABEL_13;
        }
        if ( v17 == v16 )
        {
LABEL_13:
          v35 = v12;
          v36 = v32;
          LOBYTE(v19) = sub_98E20((__int64 *)v15, a2);
          v8 = v19;
          if ( (_BYTE)v19 )
          {
            v20 = *(_QWORD *)(a4 + 8);
            if ( *(_QWORD *)(a4 + 16) < (unsigned __int64)(v20 + 1) )
            {
              v33 = *(_QWORD *)(a4 + 16);
              v23 = qvector_reserve(a4, 0, v20 + 1, 16);
              v24 = *(unsigned __int64 **)a4;
              v21 = (unsigned __int64 *)v23;
              v25 = v23;
              v26 = *(_QWORD *)(a4 + 8);
              v27 = *(_QWORD *)(a4 + 16);
              v28 = *(const __m128i **)a4;
              *(_QWORD *)(a4 + 16) = v33;
              v29 = v26 - 1;
              if ( v29 >= 0 )
              {
                do
                {
                  v30 = _mm_loadu_si128(v28);
                  v25 += 16;
                  ++v28;
                  *(__m128i *)(v25 - 16) = v30;
                }
                while ( v29-- != 0 );
                v24 = *(unsigned __int64 **)a4;
              }
              qfree(v24);
              v20 = *(_QWORD *)(a4 + 8);
              *(_QWORD *)a4 = v21;
              *(_QWORD *)(a4 + 16) = v27;
            }
            else
            {
              v21 = *(unsigned __int64 **)a4;
            }
            v22 = &v21[2 * v20];
            *v22 = v12;
            v22[1] = v32;
            ++*(_QWORD *)(a4 + 8);
            goto LABEL_11;
          }
        }
      }
      v8 = 0;
    }
LABEL_11:
    sub_84A10(&v34);
  }
  sub_1B750((__int64)v37);
  return v8;
}
