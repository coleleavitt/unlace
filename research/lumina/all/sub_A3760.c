__int64 __fastcall sub_A3760(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  __int64 v5; // rdx
  int v7; // eax
  unsigned __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v9[0] = *a2;
  v7 = sub_196ED0(v9, v5);
  v8 = v9[0];
  if ( v3 >= v9[0] )
    return 0;
  *(_BYTE *)(a1 + 9) = v7 != 0;
  *a2 = v8;
  return 1;
}
