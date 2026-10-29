__int64 __fastcall sub_638C0(__int64 a1, _DWORD *a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  unsigned int v4; // esi

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL);
  if ( v3 == sub_630B0 )
  {
    v4 = *(_DWORD *)(a1 + 88);
    if ( v4 > 0xFFF && sub_5F700((_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL), v4) )
      goto LABEL_5;
LABEL_3:
    *a2 = 16;
    return 0;
  }
  if ( ((unsigned int (*)(void))v3)() <= 0xFFF )
    goto LABEL_3;
LABEL_5:
  *a2 = 7;
  return 0;
}

