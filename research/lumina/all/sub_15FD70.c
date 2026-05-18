unsigned __int64 __fastcall sub_15FD70(_DWORD *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rbx
  __m128i *v9; // rsi
  unsigned __int8 *v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // r13
  unsigned __int8 *v19; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  _DWORD *v29; // rsi
  __int64 v30; // rsi
  __m128i *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned int v34; // [rsp+8h] [rbp-240h]
  __int64 v35; // [rsp+18h] [rbp-230h]
  _QWORD *v36; // [rsp+18h] [rbp-230h]
  _OWORD v37[2]; // [rsp+20h] [rbp-228h] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-208h] BYREF
  __int64 (__fastcall *v39)(__int64, __int64); // [rsp+50h] [rbp-1F8h]
  __int128 v40; // [rsp+58h] [rbp-1F0h]
  _OWORD *v41; // [rsp+68h] [rbp-1E0h]
  _BYTE v42[24]; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-1C0h]
  __int64 v44; // [rsp+1C0h] [rbp-88h]
  __int64 v45; // [rsp+1C8h] [rbp-80h]
  __int64 v46; // [rsp+1D0h] [rbp-78h]
  unsigned __int64 v47; // [rsp+208h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v9 = (__m128i *)(&dword_0 + 1);
  v10 = (unsigned __int8 *)sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  v15 = sub_D9DB0(a4[1], 1u, a2, v11, v12, v13, v14);
  v17 = *(_BYTE *)(v8 + 111) == 0;
  v18 = *(_QWORD *)(v8 + 496);
  v19 = (unsigned __int8 *)v15;
  *(_QWORD *)(v8 + 496) = 0;
  if ( v17 )
    sub_CC760(v8);
  if ( v10 && v19 )
  {
    v9 = (__m128i *)v10;
    v21 = sub_15FC20((__int64)v42, v10, v8, v19, 0);
    if ( v21 )
      goto LABEL_9;
    memset(v37, 0, sizeof(v37));
    v41 = v37;
    v40 = 0;
    v38[0] = v42;
    v38[1] = sub_CF240;
    v39 = sub_DE400;
    if ( v44 )
    {
      if ( *(_BYTE *)(v44 + 63) != 2 )
      {
        sub_CDDC0((__int64)v38, *(int **)(v44 + 32));
        v26 = v44;
        if ( *(__int16 *)(v44 + 54) > 0 )
        {
          v27 = 0;
          do
          {
            v28 = *(unsigned __int16 *)(*(_QWORD *)(v26 + 8) + 16 * v27 + 12);
            if ( (_WORD)v28 )
            {
              if ( !*(_BYTE *)(v26 + 63) )
              {
                v29 = *(_DWORD **)(v26 + 80);
                if ( v29 )
                {
                  if ( *v29 >= v28 )
                  {
                    v30 = *(_QWORD *)&v29[6 * v28 - 4];
                    if ( v30 )
                    {
                      v35 = v27;
                      sub_CDCD0((__int64)v38, v30);
                      v26 = v44;
                      v27 = v35;
                    }
                  }
                }
              }
            }
            ++v27;
          }
          while ( *(__int16 *)(v26 + 54) > (int)v27 );
        }
        goto LABEL_25;
      }
      v33 = *(_QWORD *)(v44 + 64);
      *(_DWORD *)(v33 + 4) &= ~0x200000u;
      v36 = (_QWORD *)v33;
      v43 = 0;
      sub_CFDC0((__int64)v42, v33, 0);
      v22 = (__int64)v36;
      if ( *(_BYTE *)(v8 + 103) )
      {
        v9 = *(__m128i **)&v37[0];
        v21 = 7;
        if ( !*(_QWORD *)&v37[0] )
          goto LABEL_11;
        do
        {
LABEL_26:
          v31 = (__m128i *)v9[1].m128i_i64[1];
          v34 = v21;
          sub_C9250(v8, v9);
          v21 = v34;
          v9 = v31;
        }
        while ( v31 );
LABEL_27:
        if ( !v21 )
          goto LABEL_13;
        goto LABEL_9;
      }
      v21 = v43;
      if ( !v43 )
      {
        if ( v36 && v39 )
          sub_CDAF0((__int64)v38, v36);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v45 )
      {
        sub_CDDC0((__int64)v38, *(int **)(v45 + 80));
        v32 = *(_QWORD *)(v45 + 72);
        if ( v32 )
          sub_CDCD0((__int64)v38, v32);
LABEL_25:
        v21 = sub_F5720((__int64)a1, (__int64 *)v37, (const char *)v19, nullptr, 0);
        v9 = *(__m128i **)&v37[0];
        if ( !*(_QWORD *)&v37[0] )
          goto LABEL_27;
        goto LABEL_26;
      }
      v21 = sub_145C50((__int64)v42);
      if ( !v21 )
      {
        sub_CF140((__int64)v38, *(_QWORD *)(v46 + 24), (__int64 *)(v46 + 56));
        goto LABEL_25;
      }
    }
    v9 = *(__m128i **)&v37[0];
    if ( !*(_QWORD *)&v37[0] )
    {
LABEL_9:
      if ( (*(_QWORD *)(v8 + 48) & 0x10000001LL) != 1 || v21 != 1 )
      {
LABEL_11:
        v25 = *(_QWORD *)a1;
        a1[9] = v21;
        if ( (*(_BYTE *)(v25 + 20) & 1) != 0 )
        {
          v9 = (__m128i *)v21;
          sub_F4FB0((__int64)a1, v21);
        }
        goto LABEL_13;
      }
      v9 = (__m128i *)a4[1];
      sub_FD650((__int64)a1, v9, 1, v22, v23, v24);
LABEL_13:
      sub_11EA20((__int64)v42, (__int64)v9, v25, v22, v23, v24);
      goto LABEL_5;
    }
    goto LABEL_26;
  }
LABEL_5:
  v17 = *(_BYTE *)(v8 + 111) == 0;
  *(_QWORD *)(v8 + 496) = v18;
  if ( v17 )
    sub_CC7E0(v8, (__int64)v9, v16);
  return __readfsqword(0x28u) ^ v47;
}
