__int64 __fastcall sub_884C0(__int64 a1, __int64 a2, __int64 a3, int a4, __m128i a5)
{
  __int64 result; // rax
  unsigned __int64 module_data; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+Fh] [rbp-79h]
  _QWORD v14[6]; // [rsp+10h] [rbp-78h] BYREF
  int v15; // [rsp+40h] [rbp-48h]
  char v16; // [rsp+44h] [rbp-44h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  result = 0;
  if ( a4 <= 13 )
  {
    module_data = get_module_data();
    v11 = j__qalloc_or_throw(1512, a2, v9, v10);
    sub_336F00(v11, module_data);
    v14[0] = a2;
    v14[1] = a2 + a3;
    v12 = *(_QWORD *)(v11 + 1504);
    v14[2] = v11;
    v14[3] = v12;
    v14[4] = -1;
    v14[5] = 4;
    v15 = a4;
    v16 = 1;
    result = sub_883D0(a1, (__int64)v14, a5);
    if ( v11 )
    {
      v13 = result;
      sub_84290(v11);
      j__qfree(v11);
      return v13;
    }
  }
  return result;
}

