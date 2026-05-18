__int64 __fastcall sub_A4350(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  __int64 v5; // rdx
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rdx
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v12[0] = *a2;
  v7 = v5;
  v8 = sub_196ED0(v12, v5);
  v9 = v12[0];
  *(_DWORD *)(a1 + 12) = v8;
  if ( v3 >= v9 )
    return 0;
  v10 = sub_196ED0(v12, v7);
  v11 = v12[0];
  if ( v9 >= v12[0] )
    return 0;
  *(_BYTE *)(a1 + 16) = v10 != 0;
  *a2 = v11;
  return 1;
}
