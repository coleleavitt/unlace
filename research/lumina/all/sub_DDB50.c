__int64 *__fastcall sub_DDB50(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // eax
  __int64 v5; // rsi
  __int64 *v6; // r13
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbp
  int *v10; // r14
  __int64 *v11; // rbp
  bool v12; // zf
  __int64 *v13; // rax
  _DWORD *v14; // rsi
  char v15; // dl
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rbp
  int v20; // [rsp+8h] [rbp-50h]
  int *v22; // [rsp+10h] [rbp-48h]

  if ( !a2 )
    return nullptr;
  v3 = *a2;
  v5 = 112;
  if ( v3 > 0 )
    v5 = 104 * (v3 - 1) + 112;
  v6 = sub_DBF10(a1, v5);
  if ( !v6 )
    return nullptr;
  v7 = *a2;
  *((_DWORD *)v6 + 1) = *a2;
  *(_DWORD *)v6 = v7;
  if ( *a2 > 0 )
  {
    v20 = 0;
    do
    {
      v8 = v20;
      v9 = 104LL * v20;
      v10 = &a2[(unsigned __int64)v9 / 4];
      v11 = &v6[(unsigned __int64)v9 / 8];
      v11[1] = *((_QWORD *)v10 + 1);
      v11[2] = (__int64)sub_DC720(a1, *((const char **)v10 + 2));
      v11[3] = (__int64)sub_DC720(a1, *((const char **)v10 + 3));
      v11[4] = (__int64)sub_DC720(a1, *((const char **)v10 + 4));
      *((_DWORD *)v11 + 17) = v10[17];
      v12 = (*((_BYTE *)v11 + 69) & 2) == 0;
      *((_DWORD *)v11 + 18) = v10[18];
      *((_DWORD *)v11 + 14) = v10[14];
      *((_DWORD *)v11 + 15) = v10[15];
      if ( !v12 )
        v11[12] = (__int64)sub_DC720(a1, *((const char **)v10 + 12));
      v13 = &v6[13 * v20];
      v14 = *(_DWORD **)&a2[26 * v20 + 26];
      v15 = *((_BYTE *)v13 + 69);
      v16 = v13 + 6;
      v16[7] = (__int64)v14;
      if ( v15 < 0 )
      {
        ++*v14;
        v15 = *((_BYTE *)v16 + 21);
      }
      if ( (v15 & 4) != 0 )
        v6[13 * v20 + 12] = (__int64)sub_DD150(a1, *(_DWORD **)&a2[26 * v20 + 24], a3);
      v17 = *(_QWORD *)&a2[26 * v20 + 10];
      v6[13 * v20 + 5] = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 44);
      v18 = &v6[13 * v20];
      v22 = &a2[26 * v20];
      v18[6] = sub_DD450(a1, *((char **)v22 + 6), a3);
      if ( (*((_BYTE *)v22 + 70) & 2) != 0 )
        v18[10] = (__int64)sub_DD0B0(a1, *((_QWORD *)v22 + 10));
      else
        v18[10] = (__int64)sub_DDB30(a1, *((_QWORD *)v22 + 10), a3);
      ++v20;
      v6[13 * v8 + 11] = *(_QWORD *)&a2[26 * v8 + 22];
    }
    while ( *a2 > v20 );
  }
  return v6;
}
