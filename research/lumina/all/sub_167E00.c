__int64 __fastcall sub_167E00(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 *v4; // rsi
  char *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !a2 )
  {
    sub_1679D0("Expected packet", (__int64 *)(a1 + 16));
    return 0;
  }
  v2 = sub_168AC0(a1, *((unsigned __int8 *)a2 + 4));
  if ( !v2 )
  {
    ptr = nullptr;
    v7 = 0;
    sub_299F0((char **)&ptr);
    v4 = (__int64 *)(a1 + 16);
    v5 = (char *)s1;
    if ( (_QWORD)v7 )
      v5 = (char *)ptr;
    sub_1679D0(v5, v4);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      j__free(ptr);
      return 0;
    }
    return 0;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 16))(
             (__int64)a2 + 5,
             *a2,
             *(unsigned int *)(a1 + 108));
  if ( result )
  {
    *(_BYTE *)(result + 8) = *((_BYTE *)a2 + 4);
  }
  else
  {
    sub_1679D0("Couldn't deserialize packet", (__int64 *)(a1 + 16));
    return 0;
  }
  return result;
}
