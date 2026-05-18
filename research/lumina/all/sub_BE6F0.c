unsigned __int64 __fastcall sub_BE6F0(__int64 a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v4)(_QWORD *); // rdx
  void (__fastcall *v5)(_QWORD *); // rax
  void *v6; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v8; // [rsp+10h] [rbp-40h]
  unsigned __int64 v9; // [rsp+20h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  ptr = nullptr;
  sub_299F0((char **)&ptr);
  unk_241E58(&v6, a1);
  if ( v6 )
  {
    unk_241E68(&v6, 0);
    v1 = v6;
    if ( v6 )
    {
      if ( (*((_DWORD *)v6 + 2))-- == 1 )
      {
        v4 = *(void (__fastcall **)(_QWORD *))*v1;
        if ( v4 == sub_BCB00 )
        {
          v5 = *(void (__fastcall **)(_QWORD *))(*v1 + 16LL);
          if ( v5 == sub_BCAE0 )
          {
            sub_BC950(v1);
            operator delete(v1, 0x458u);
          }
          else
          {
            v5(v1);
          }
        }
        else
        {
          v4(v1);
        }
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    j__free(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
