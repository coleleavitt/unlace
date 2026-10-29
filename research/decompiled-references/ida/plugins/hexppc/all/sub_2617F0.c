__int64 sub_2617F0(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  _DWORD *exception; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  bool v6; // sf
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-108h] BYREF
  __int128 v10; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-D0h]

  va_start(va, a3);
  v4 = a2;
  v12 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  sub_67D60(&v9);
  if ( (unsigned __int64)v10 > 1 )
  {
    v5 = tag_remove();
    if ( v5 > 0 )
      v4 = v5 + a2;
  }
  v6 = *(_QWORD *)(a1 + 64) + (int)v4 < 0;
  v7 = *(_QWORD *)(a1 + 64) + (int)v4;
  *(_QWORD *)(a1 + 64) = v7;
  if ( v6 || v7 > *(_QWORD *)(a1 + 56) )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = 1;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v4;
}

