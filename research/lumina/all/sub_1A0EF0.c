__int64 __fastcall sub_1A0EF0(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  int v5; // [rsp+Ch] [rbp-2Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __int128 v7; // [rsp+18h] [rbp-20h]
  int v8[2]; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v5 = a2;
  *(_QWORD *)v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    sub_1A0A50(*(_QWORD *)a1, 4, &v5, 4u);
  }
  else if ( !*(_BYTE *)(a1 + 12) )
  {
    v4 = *(_QWORD *)a1;
    ptr = nullptr;
    v7 = 0;
    if ( (unsigned int)sub_19FB10(v4, (__int64)&ptr) == 4 )
      v2 = *(_DWORD *)ptr;
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      j__free(ptr);
    }
  }
  return v2;
}
