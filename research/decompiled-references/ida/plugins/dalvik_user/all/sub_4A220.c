__int64 __fastcall sub_4A220(unsigned __int64 a1)
{
  unsigned int v1; // r12d
  char *v2; // rax
  char *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  qmutex_lock();
  v5 = 0;
  v6 = 0;
  v2 = sub_48F20(a1, 1u, 6u, 0, (__int64)&v5);
  v3 = v2;
  LOBYTE(v1) = v2 != nullptr;
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
      qfree();
    operator delete(v3, 0x20u);
  }
  qmutex_unlock();
  return v1;
}

