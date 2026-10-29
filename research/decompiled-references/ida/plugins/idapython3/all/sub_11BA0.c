__int64 __fastcall sub_11BA0(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
  struct _Unwind_Exception *v4; // r14

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)a1 = &off_238D8;
  *(_QWORD *)(a1 + 104) = &off_23908;
  *(_QWORD *)(a1 + 120) = &off_23930;
  *(_QWORD *)(a1 + 176) = 0x101000100000000LL;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  result = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_WORD *)(a1 + 184) = 257;
  *(_BYTE *)(a1 + 186) = -1;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  memset(
    (void *)((a1 + 272) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 272) & 0xFFFFFFF8) + 1152) >> 3));
  *(_WORD *)(a1 + 1152) = 256;
  *(_BYTE *)(a1 + 1154) = 0;
  if ( qword_24798 )
  {
    if ( !under_debugger )
    {
      v4 = (struct _Unwind_Exception *)interr();
      v1 = *(void **)(a1 + 288);
      if ( v1 )
      {
        dlclose(v1);
        *(_QWORD *)(a1 + 288) = 0;
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        *(_QWORD *)(a1 + 272) = 0;
        qfree();
      }
      if ( *(_QWORD *)(a1 + 240) )
      {
        *(_QWORD *)(a1 + 248) = 0;
        qfree();
      }
      if ( *(_QWORD *)(a1 + 216) )
      {
        *(_QWORD *)(a1 + 224) = 0;
        qfree();
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        *(_QWORD *)(a1 + 200) = 0;
        qfree();
      }
      if ( *(_QWORD *)(a1 + 144) )
      {
        *(_QWORD *)(a1 + 152) = 0;
        qfree();
      }
      *(_QWORD *)(a1 + 120) = &off_23CF8;
      remove_event_listener();
      *(_QWORD *)(a1 + 104) = &off_23CF8;
      remove_event_listener();
      _Unwind_Resume(v4);
    }
    BUG();
  }
  qword_24798 = a1;
  return result;
}

