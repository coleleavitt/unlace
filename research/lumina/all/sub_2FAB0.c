__int64 __fastcall sub_2FAB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  const char *v6; // r8
  unsigned int v7; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  sub_2EDF0((__int64)&ptr, v4);
  v6 = (const char *)ptr;
  if ( !v10 )
    v6 = s1;
  v7 = sub_2F9D0(a3, a2, (__int64)"usB", *(unsigned int *)(a1 + 40), v6, a1 + 16);
  if ( ptr )
  {
    v10 = 0;
    j__free(ptr);
  }
  return v7;
}
