void __fastcall sub_F3CA0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, double a5)
{
  __int64 v8; // rax
  int v9; // esi
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  int v14; // eax
  __int64 *v15; // rax

  if ( (*(_BYTE *)(a2 + 4) & 8) == 0 && !(unsigned __int8)sub_C6820(a3) )
  {
    v8 = sub_F3C70(*(_QWORD *)a1, a4, a5);
    if ( !v8 || *(int (__fastcall **)(__int64, int, const void *, int, const void *))(v8 + 24) == sub_C7E20 )
    {
      v9 = *(_DWORD *)(a1 + 16);
      if ( v9 <= 0 )
      {
LABEL_12:
        if ( (unsigned __int8)sub_C6820((unsigned __int8 *)a2) == 65 )
          *(_DWORD *)(a1 + 24) = 1;
        v13 = *(_QWORD **)(a1 + 32);
        v14 = *(_DWORD *)(a1 + 16) + 1;
        *(_DWORD *)(a1 + 16) = v14;
        v15 = sub_DFFD0(**(_QWORD **)a1, v13, 16LL * v14);
        *(_QWORD *)(a1 + 32) = v15;
        if ( v15 )
        {
          v15[2 * *(_DWORD *)(a1 + 16) - 2] = a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * *(_DWORD *)(a1 + 16) - 8) = a3;
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
      }
      else
      {
        v10 = 2 * v9;
        v11 = 0;
        while ( 1 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v11);
          if ( *(_DWORD *)(v12 + 44) == *(_DWORD *)(a2 + 44) && *(_WORD *)(v12 + 48) == *(_WORD *)(a2 + 48) )
            break;
          v11 += 2;
          if ( v10 == v11 )
            goto LABEL_12;
        }
      }
    }
  }
}
