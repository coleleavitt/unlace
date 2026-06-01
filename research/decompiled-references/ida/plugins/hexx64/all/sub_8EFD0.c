__int64 __fastcall sub_8EFD0(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned __int64 module_data; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD v9[6]; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+34h] [rbp-34h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  module_data = get_module_data();
  v6 = j__qalloc_or_throw(1512, a2, v4, v5);
  sub_336F00(v6, module_data);
  v7 = *(_QWORD *)(v6 + 1504);
  v9[0] = a1;
  v9[1] = a2 + a1;
  v9[2] = v6;
  v9[3] = v7;
  v9[4] = -1;
  v10 = 0;
  v11 = 0;
  v9[5] = 4;
  if ( !(unsigned __int8)sub_8C080(v6, (__int64)v9, -1, a3) )
  {
    if ( v6 )
    {
      sub_84290(v6);
      j__qfree(v6);
    }
    return 0;
  }
  return v6;
}

