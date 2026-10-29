__int64 __fastcall sub_114DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, __int64 a6)
{
  int v8; // eax
  __int64 v10; // r15
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edx
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a5;
  v18[1] = __readfsqword(0x28u);
  if ( v8 == 12 )
  {
    v10 = (__int64)(a5 + 8);
    v12 = a6 + 1;
    v13 = (__int64)(a5 + 12);
    if ( (unsigned __int8)sub_114580(a2, a3, a4, (__int64)(a5 + 12), (__int64)(a5 + 8), a6 + 1) )
      return v10;
    if ( (unsigned __int8)sub_114580(a2, a3, a4, v10, v13, v12) )
      return v13;
    return 0;
  }
  if ( v8 != 13 )
    return 0;
  if ( a6 != 1 )
    return 0;
  v18[0] = a4;
  v14 = sub_308250(a1, a3, v18);
  if ( !v14 )
    return 0;
  v10 = (__int64)(a5 + 8);
  v15 = (_DWORD)a5 + 32;
  if ( *((_BYTE *)a5 + 32) == 4 )
  {
    v17 = *((_DWORD **)a5 + 5);
    if ( *v17 == 8 )
      v15 = (_DWORD)v17 + 32;
  }
  if ( *(_BYTE *)v14 == 4 )
  {
    v16 = *(_DWORD **)(v14 + 8);
    if ( *v16 == 8 )
      LODWORD(v14) = (_DWORD)v16 + 32;
  }
  if ( !(unsigned __int8)sub_14E320(a1, a2, v15, v14, *((_QWORD *)a5 + 3), a3, a4) )
    return 0;
  return v10;
}

