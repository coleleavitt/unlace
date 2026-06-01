unsigned __int64 __fastcall sub_34040(__int64 a1)
{
  int v1; // edx
  int v2; // ebx
  const char *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[4]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 272);
  v10 = __readfsqword(0x28u);
  if ( v1 >= 0 )
  {
    v2 = 0;
    do
    {
      sub_32240((__int64 *)(a1 + 560), v2);
      sub_28EA0((__int64)v8, a1, v2);
      sub_325D0((__int64)v9, (_QWORD *)(*(_QWORD *)(a1 + 584) + 32LL * v2), v3, v4, v5, v6);
      if ( v9[0] )
      {
        v9[1] = 0;
        qfree(v9[0]);
      }
      if ( v8[0] )
      {
        v8[1] = 0;
        qfree(v8[0]);
      }
      ++v2;
    }
    while ( *(_DWORD *)(a1 + 272) >= v2 );
  }
  return v10 - __readfsqword(0x28u);
}

