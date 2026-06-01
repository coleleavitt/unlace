__int64 *__fastcall sub_27A660(__int64 *a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 v3; // rcx
  int v4; // esi
  int v5; // esi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx

  result = a2;
  v3 = *a1;
  *a1 = *a2;
  v4 = *((_DWORD *)a2 + 2);
  *result = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v4;
  v5 = *((_DWORD *)result + 3);
  *((_DWORD *)result + 2) = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v5;
  v6 = result[3];
  *((_DWORD *)result + 3) = v3;
  v7 = a1[3];
  a1[3] = v6;
  v8 = result[4];
  result[3] = v7;
  v9 = a1[4];
  a1[4] = v8;
  v10 = result[5];
  result[4] = v9;
  v11 = a1[5];
  a1[5] = v10;
  v12 = result[6];
  result[5] = v11;
  v13 = a1[6];
  a1[6] = v12;
  LODWORD(v12) = *((_DWORD *)result + 14);
  result[6] = v13;
  LODWORD(v13) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a1 + 14) = v12;
  *((_DWORD *)result + 14) = v13;
  return result;
}

