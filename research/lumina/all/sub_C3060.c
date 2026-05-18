__int64 __fastcall sub_C3060(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    v3 = xmmword_241548(a2, (unsigned int)(*(_DWORD *)(a1 + 40) + 72), *(unsigned __int8 *)(a1 + 44));
    if ( v3 )
    {
      ((void (__fastcall *)(__int64))*(&xmmword_241548 + 1))(v3);
      if ( *(_QWORD *)(a1 + 64) )
        (*((void (**)(void))&xmmword_241578 + 1))();
      *(_QWORD *)(a1 + 64) = v3;
      *(_DWORD *)(a1 + 36) = a2;
      return 0;
    }
    else
    {
      return 7;
    }
  }
  return result;
}
