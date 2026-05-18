__int64 __fastcall sub_75760(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  bool v4; // cf
  __int64 v5; // rdx
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-58h]
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v16[0] = *a2;
  v7 = v5;
  v8 = sub_196ED0(v16, v5);
  v9 = v16[0];
  v10 = v8;
  if ( v3 >= v16[0] )
    return 0;
  v11 = v8;
  sub_32030((__int64 *)(a1 + 16), v8);
  if ( v10 )
  {
    v12 = 0;
    v15 = 4 * v11;
    do
    {
      v13 = *(_QWORD *)(a1 + 16);
      v16[0] = v9;
      *(_DWORD *)(v12 + v13) = sub_196ED0(v16, v7);
      v14 = v9;
      v9 = v16[0];
      if ( v14 >= v16[0] )
        return 0;
      v12 += 4;
    }
    while ( v12 != v15 );
  }
  *a2 = v9;
  return 1;
}
