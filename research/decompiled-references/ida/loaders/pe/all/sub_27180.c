__int64 __fastcall sub_27180(__int64 a1)
{
  void *exception; // rbx
  unsigned __int8 *v2; // rax
  unsigned int v3; // ebp
  int v5; // r12d
  int v6; // r12d
  int v7; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v2 + 1) )
  {
    exception = __cxa_allocate_exception(0x18u);
    sub_27040((__int64)exception);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'signature_read_exception_t, (void (*)(void *))sub_21520);
  }
  v3 = *v2;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  if ( (v3 & 0x80u) != 0 )
  {
    sub_27120(a1, &v7, 1);
    if ( (v3 & 0x40) != 0 )
    {
      v5 = v7;
      sub_27120(a1, &v7, 1);
      v6 = (unsigned __int16)((_WORD)v7 << 8) | (v5 << 16) & 0xFF0000;
      sub_27120(a1, &v7, 1);
      return (unsigned __int8)v7 | v6 | (v3 << 24) & 0x1F000000;
    }
    else
    {
      return (unsigned __int8)v7 | ((_WORD)v3 << 8) & 0x3F00u;
    }
  }
  return v3;
}
