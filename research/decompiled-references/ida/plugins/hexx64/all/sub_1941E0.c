__int64 __fastcall sub_1941E0(__int64 a1, signed int a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rcx
  int v8; // r15d
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __m128i *v16; // r12
  __int64 v17; // rax
  unsigned __int64 v19; // r13
  char v20; // al
  __int64 v21; // rdx
  unsigned int **v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  unsigned int **v28; // [rsp+10h] [rbp-88h]
  unsigned int v29; // [rsp+1Ch] [rbp-7Ch]
  __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  __int128 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+38h] [rbp-60h]
  char v33; // [rsp+40h] [rbp-58h]
  unsigned __int64 v34; // [rsp+48h] [rbp-50h]
  char v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD **)a1;
  v36 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 208) = a2;
  v8 = *(_DWORD *)(*(_QWORD *)(v5 + 1504) + 84LL);
  v9 = (unsigned __int64 *)(*v6 + 24LL * a2);
  v10 = *v9;
  if ( *v9 )
  {
    v11 = (_QWORD *)*v9;
    if ( v9[1] )
      v11 = *(_QWORD **)(v10 + 8);
LABEL_4:
    if ( (_QWORD *)v10 == v11 )
      return 0;
    while ( v11[4] <= 1u || *((_DWORD *)v11 + 16) != v8 )
    {
      if ( (*v11 & 2) == 0 )
      {
        v12 = (_QWORD *)v11[2];
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
          v13 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v14 = *v13;
          if ( (*v13 & 2) == 0 )
          {
            while ( (_QWORD *)v13[2] == v11 )
            {
              v11 = v13;
              v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
              v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v14 & 2) != 0 )
              {
                v11 = (_QWORD *)v15;
                goto LABEL_4;
              }
              v13 = (_QWORD *)v15;
            }
          }
          v11 = v13;
        }
        else
        {
          do
          {
            v11 = v12;
            v12 = (_QWORD *)v12[1];
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
        goto LABEL_4;
      }
    }
    LOBYTE(v31) = 0;
    v30 = -1;
    v16 = sub_193220((_QWORD *)(a1 + 16), a2, &v30, a3);
    v17 = v16->m128i_i64[0];
    if ( v16->m128i_i64[0] )
    {
      if ( v16->m128i_i64[1] )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( v17 != v19 )
        {
          v29 = 0;
          while ( 1 )
          {
            v20 = *(_BYTE *)(v19 + 32);
            v21 = *(_QWORD *)(v19 + 24);
            v35 = 1;
            v33 = v20;
            v30 = 0;
            v32 = v21;
            v34 = 0xFFFFFFFF00000001LL;
            v31 = 0;
            v22 = (unsigned int **)sub_104DF0(v9, (__int64)&v30);
            if ( v30 )
            {
              v28 = v22;
              *(_QWORD *)&v31 = 0;
              qfree(v30);
              v22 = v28;
            }
            if ( v22 && (unsigned __int64)v22[1] > 1 && *((_DWORD *)v22 + 10) == v8 )
              v29 += sub_194030(a1, v19 + 40, v22, v23, 0.0, a4);
            if ( (*(_QWORD *)v19 & 2) != 0 )
              goto LABEL_33;
            v24 = *(_QWORD *)(v19 + 16);
            if ( (*(_BYTE *)v24 & 2) != 0 )
            {
              v25 = (_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
              v26 = *v25;
              if ( (*v25 & 2) == 0 )
              {
                while ( v25[2] == v19 )
                {
                  v19 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                  v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v26 & 2) != 0 )
                    goto LABEL_33;
                  v27 = v25;
                  v25 = (_QWORD *)v19;
                  v19 = (unsigned __int64)v27;
                }
              }
              v19 = (unsigned __int64)v25;
              if ( (_QWORD *)v16->m128i_i64[0] == v25 )
                return v29;
            }
            else
            {
              while ( (**(_BYTE **)(v24 + 8) & 2) == 0 )
                v24 = *(_QWORD *)(v24 + 8);
              v19 = v24;
LABEL_33:
              if ( v16->m128i_i64[0] == v19 )
                return v29;
            }
          }
        }
      }
    }
  }
  return 0;
}

