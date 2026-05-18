__int64 __fastcall sub_D6560(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // esi
  int v7; // ecx
  int v8; // edx

  if ( qword_241610 && (unsigned int)qword_241610(100) )
  {
    *a3 = 0;
    goto LABEL_8;
  }
  v4 = sub_D2260(0x48u, (__int64)a2);
  *a3 = v4;
  if ( !v4 )
  {
LABEL_8:
    sub_D6510((__int64)a2, a2);
    return 7;
  }
  v4[1] = a2;
  *v4 = a1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(v5 + 4);
  v7 = *(_DWORD *)(v5 + 8) + 9;
  v8 = v6 / 2;
  if ( v6 / 2 < v7 )
    v8 = v7;
  *((_DWORD *)v4 + 6) = v8;
  *(_QWORD *)(a1 + 96) += v8;
  return 0;
}
