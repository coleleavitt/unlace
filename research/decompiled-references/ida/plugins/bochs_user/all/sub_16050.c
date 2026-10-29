unsigned __int64 __fastcall sub_16050(__int64 a1)
{
  int v1; // eax
  __int64 vars0; // [rsp+0h] [rbp+0h]
  char vars1000; // [rsp+1000h] [rbp+1000h] BYREF
  char vars2000; // [rsp+2000h] [rbp+2000h] BYREF
  unsigned __int64 vars3008; // [rsp+3008h] [rbp+3008h]

  vars3008 = __readfsqword(0x28u);
  memset((void *)(a1 + 1112), 0, 0x38A0u);
  *(_DWORD *)(a1 + 9308) = (unsigned __int8)getinf_flag();
  idadir();
  qmakepath();
  if ( (unsigned __int8)qfileexist() )
    qstrncpy();
  if ( (unsigned __int8)sub_303A0(&vars1000, 4096, &vars2000, 4096) )
  {
    qmakepath();
    if ( (unsigned __int8)qfileexist() )
      qstrncpy();
    if ( !*(_BYTE *)(a1 + 5208) )
    {
      qmakepath();
      if ( (unsigned __int8)qfileexist() )
        qstrncpy();
    }
  }
  if ( get_loader_name() > 0 && vars0 == 0x63727368636F62LL )
    v1 = 1;
  else
    v1 = ((unsigned int)getinf() == 11) + 2;
  *(_DWORD *)(a1 + 9316) = v1;
  *(_WORD *)(a1 + 9304) = 257;
  *(_WORD *)(a1 + 15600) = 32;
  *(_DWORD *)(a1 + 9320) = 30;
  *(_DWORD *)(a1 + 9336) = 7168;
  *(_WORD *)(a1 + 9340) = 0;
  *(_QWORD *)(a1 + 9328) = 64;
  *(_WORD *)(a1 + 9312) = 0;
  return vars3008 - __readfsqword(0x28u);
}

