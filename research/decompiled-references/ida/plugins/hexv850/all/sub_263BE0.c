__int64 __fastcall sub_263BE0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v5; // r13d

  *(_QWORD *)(a2 + 40) = a1;
  sub_252680(a1);
  sub_25BDB0(a1);
  if ( !sub_3380C0(*(_QWORD *)(a1 + 216), 13, a1, a2, v2, v3) )
  {
    sub_25E900(a1, a2);
    sub_25D380((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_407DE8, (_QWORD *)a2, 0x46u);
    ++*(_DWORD *)(a2 + 32);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 592LL);
    if ( (get_merge_state() & 3) == 0 && (*(_BYTE *)(a1 + 108) & 4) != 0 )
    {
      sub_25D380((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, v5, byte_407D00, (_QWORD *)a2, 0);
      ++*(_DWORD *)(a2 + 32);
      sub_25D380((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_3F5793, (_QWORD *)a2, 0);
    }
    else if ( (int)sub_25BA60(*(_QWORD **)(a1 + 8), v5, a2, (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) & 2) != 0) > 0 )
    {
      sub_25D380((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, (char *)&unk_3F5793, (_QWORD *)a2, 0);
    }
    sub_2631B0(a1 + 16, v5, (_QWORD *)a2, 1u);
    sub_25DD00((_QWORD *)(a1 + 16), a2, v5, 0);
    sub_25D380((void **)(a1 + 16), *(_QWORD *)(a1 + 216), 0, 0, byte_407DE0, (_QWORD *)a2, 0x47u);
  }
  return sub_25BC40(a1, (void (__fastcall ***)(_QWORD, _QWORD, void *))a2);
}

