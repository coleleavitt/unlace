void __fastcall sub_2A8960(__int64 *a1, __int64 a2, __m128 a3)
{
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 tinfo_size; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx

  if ( (*(_BYTE *)(a2 + 56) & 4) == 0 )
  {
    v4 = sub_255000(*(_DWORD *)(a2 + 8));
    if ( v4 )
    {
      v5 = v4 == 1;
      v6 = *(_DWORD *)(a2 + 8);
      v7 = *(_QWORD *)(a2 + 24);
      v8 = v5 + 1;
      if ( v6 > 0xA )
      {
        if ( v6 - 32 > 1 )
          goto LABEL_5;
      }
      else if ( v6 <= 8 )
      {
LABEL_5:
        tinfo_size = get_tinfo_size();
        v10 = get_tinfo_size();
        sub_2A8780(a1, *(_QWORD *)(a2 + 24), v8, v10, a3);
        v7 = *(_QWORD *)(a2 + 32);
        v11 = tinfo_size;
LABEL_6:
        sub_2A8780(a1, v7, v8, v11, a3);
        return;
      }
      v11 = 1;
      goto LABEL_6;
    }
  }
}

