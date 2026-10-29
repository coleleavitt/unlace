__int64 __fastcall sub_9310(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // al
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[133]; // [rsp+0h] [rbp-428h] BYREF

  v1 = *a1;
  v7[129] = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *))(v1 + 296))(a1);
  v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
  }
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
  }
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  v3 = *((unsigned __int16 *)a1 + 124);
  if ( (unsigned __int16)v3 <= 0x18u )
  {
    if ( (unsigned __int16)v3 <= 0x11u )
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
    goto LABEL_10;
  }
  v4 = (unsigned int)(v3 - 26);
  if ( (unsigned __int16)v4 <= 0x3Bu )
  {
    v5 = 0x9660002001C00FFLL;
    if ( _bittest64(&v5, v4) )
    {
LABEL_10:
      qsnprintf();
      (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 56))(a1, v7, 33);
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

