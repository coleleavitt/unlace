__int64 __fastcall sub_2643A0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v5; // r13d

  *(_QWORD *)(a2 + 40) = a1;
  sub_252E40(a1);
  sub_25C570(a1);
  if ( !sub_338EA0(*(_QWORD *)(a1 + 216), 13, a1, a2, v2, v3) )
  {
    sub_25F0C0(a1, a2);
    sub_25DB40((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_405EE8, (_QWORD *)a2, 0x46u);
    ++*(_DWORD *)(a2 + 32);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 592LL);
    if ( (get_merge_state() & 3) == 0 && (*(_BYTE *)(a1 + 108) & 4) != 0 )
    {
      sub_25DB40((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, v5, byte_405E00, (_QWORD *)a2, 0);
      ++*(_DWORD *)(a2 + 32);
      sub_25DB40((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_3F3793, (_QWORD *)a2, 0);
    }
    else if ( (int)sub_25C220(*(_QWORD **)(a1 + 8), v5, a2, (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) & 2) != 0) > 0 )
    {
      sub_25DB40((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_3F3793, (_QWORD *)a2, 0);
    }
    sub_263970(a1 + 16, v5, (_QWORD *)a2, 1u);
    sub_25E4C0((_QWORD *)(a1 + 16), a2, v5, 0);
    sub_25DB40((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_405EE0, (_QWORD *)a2, 0x47u);
  }
  return sub_25C400(a1, (void (__fastcall ***)(_QWORD, _QWORD, void *))a2);
}

