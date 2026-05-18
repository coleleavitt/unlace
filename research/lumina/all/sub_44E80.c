unsigned __int64 __fastcall sub_44E80(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  int v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    ptr = nullptr;
    v10 = -1;
    v9 = 0;
    sub_33870(v3, (__int64)&ptr, nullptr, "UPDATE users SET is_deleted = 1 WHERE id = ? ", (__int64)"u", a2);
    if ( (unsigned __int64)v9 > 1 )
      sub_16B870((unsigned int)"Error while marking user as delete: %s\n", (_DWORD)ptr, v4, v5, v6, v7);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      j__free(ptr);
    }
  }
  return v11 - __readfsqword(0x28u);
}
