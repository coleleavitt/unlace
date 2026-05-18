__int64 __fastcall sub_4B200(__int64 a1, __int64 *a2)
{
  void **p_ptr; // rsi
  const char *v6; // rdi
  int v7; // eax
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1040h]
  char dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_194590(dest, 0x1000u);
  if ( (unsigned __int8)sub_1975F0(dest)
    && !(*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, dest) )
  {
    if ( !unk_2439A0 )
      sub_198E10(3190);
LABEL_16:
    BUG();
  }
  p_ptr = &ptr;
  ptr = nullptr;
  v9 = 0;
  if ( (unsigned __int8)sub_19AD90("LICMGR_POLL_INTERVAL_SECS") )
  {
    v6 = s1;
    if ( (_QWORD)v9 )
      v6 = (const char *)ptr;
    p_ptr = nullptr;
    v7 = strtol(v6, nullptr, 10);
    *(_DWORD *)(a1 + 496) = v7;
    if ( (unsigned int)(v7 - 1) > 0x76 )
    {
      if ( !unk_2439A0 )
        sub_198E10(3149);
      goto LABEL_16;
    }
  }
  if ( !a2 )
    a2 = &qword_241B20;
  *(_QWORD *)(a1 + 32) = a2;
  sub_5DC00(a1 + 512, p_ptr);
  sub_198ED0(sub_50B70);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    j__free(ptr);
  }
  return 1;
}
