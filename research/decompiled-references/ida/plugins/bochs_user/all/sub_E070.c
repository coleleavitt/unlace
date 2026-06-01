__int64 __fastcall sub_E070(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8 * a2);
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    create_insn();
  callui(115, v2, 0xFFFFFFFFLL, 1);
  return -1;
}

