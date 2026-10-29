__int64 __fastcall sub_C35E0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 16) == 0;
  v4 = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v2 = *(_QWORD *)(a1 + 72);
      if ( *(_QWORD *)v2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 80LL))(v2, 20, &v4);
        if ( (_DWORD)result != 12 )
        {
          if ( (_DWORD)result )
            return result;
          if ( v4 )
            return 1032;
        }
      }
    }
  }
  return 0;
}
