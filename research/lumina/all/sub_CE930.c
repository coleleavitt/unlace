__int64 __fastcall sub_CE930(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 5) & 4) != 0 )
    {
      *a2 = *(_DWORD *)(a1 + 8);
      return 1;
    }
    else if ( *(_BYTE *)a1 == 0xAD )
    {
      v3 = *(_QWORD *)(a1 + 16);
      v4 = 0;
      result = sub_CE930(v3, &v4);
      if ( (_DWORD)result )
      {
        *a2 = -v4;
        return 1;
      }
    }
    else if ( *(_BYTE *)a1 == 0xAE )
    {
      return sub_CE930(*(_QWORD *)(a1 + 16), a2);
    }
  }
  return result;
}
