__int64 __fastcall sub_DF840(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  char v7; // al
  bool v8; // dl
  char v9; // dl
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)(*(_DWORD *)v2 - 56) <= 1 )
  {
    if ( *(_BYTE *)(v2 + 64) == 8 )
    {
      v4 = *(_QWORD *)(v2 + 72);
      v5 = *(_QWORD *)(v4 + 24);
      v6 = v5 + 80LL * *(_QWORD *)(v4 + 32);
      if ( v5 != v6 )
      {
        if ( *(_BYTE *)v5 == 1 )
          goto LABEL_11;
        while ( 1 )
        {
          v5 += 80;
          if ( v6 == v5 )
            break;
          if ( *(_BYTE *)v5 == 1 )
          {
LABEL_11:
            if ( sub_60730(*(_QWORD **)(a1 + 40), *(_DWORD *)(v5 + 8)) )
            {
              if ( (get_tinfo_property() & 0xF) != 9 )
                return 3;
              copy_tinfo_t();
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)(v2 + 32) != 1 || (v7 = sub_11E3C0(), v2 = *(_QWORD *)(a1 + 32), !v7) && (*(_BYTE *)(v2 + 33) & 4) == 0 )
  {
LABEL_3:
    if ( *(_BYTE *)(v2 + 48) == 1 )
    {
      v9 = sub_11E3E0();
      v10 = *(_QWORD *)(a1 + 32);
      if ( v9 || (*(_BYTE *)(v10 + 49) & 4) != 0 )
        return 2 * (unsigned int)sub_60730(*(_QWORD **)(a1 + 40), *(_DWORD *)(v10 + 56));
    }
    return 0;
  }
  v8 = sub_60730(*(_QWORD **)(a1 + 40), *(_DWORD *)(v2 + 40));
  result = 2;
  if ( !v8 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    goto LABEL_3;
  }
  return result;
}

