__int64 __fastcall sub_CDAF0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  int v3; // eax
  unsigned int v4; // r13d
  __int64 v5; // rsi
  void (__fastcall __spoils<> *v6)(__int64, _QWORD *); // rax
  int *v7; // rdx
  _DWORD *v8; // r15
  _DWORD *v9; // r12
  void (__fastcall *v11)(__int64, _QWORD *); // rax

  v2 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, a2);
  if ( v3 )
  {
    return v3 & 2;
  }
  else
  {
    while ( !(unsigned int)sub_CDDC0(a1, v2[4]) && (!v2[6] || !(unsigned int)sub_CDCD0(a1)) )
    {
      if ( (unsigned int)sub_CDDC0(a1, v2[7]) || v2[8] && (unsigned int)sub_CDCD0(a1) )
        break;
      v4 = sub_CDDC0(a1, v2[9]);
      if ( v4 || v2[12] && (unsigned int)sub_CDCD0(a1) )
        break;
      v5 = v2[15];
      if ( v5 )
      {
        v6 = *(void (__fastcall __spoils<> **)(__int64, _QWORD *))(a1 + 24);
        if ( (char *)v6 == (char *)nullsub_59 || *(_QWORD *)a1 && *(_BYTE *)(*(_QWORD *)a1 + 292LL) > 1u )
        {
          if ( (unsigned int)sub_CDED0(a1, v5, 0) )
            return 2;
        }
        else if ( v6 == sub_C4E40 && (unsigned int)sub_CDED0(a1, v5, 0) )
        {
          return 2;
        }
      }
      v7 = (int *)v2[5];
      if ( v7 )
      {
        v8 = v7 + 2;
        if ( *v7 > 0 )
        {
          v9 = &v8[26 * (*v7 - 1) + 26];
          while ( (!*((_QWORD *)v8 + 5) || !*(_QWORD *)(a1 + 16) || !(unsigned int)sub_CDAF0(a1))
               && ((*((_BYTE *)v8 + 61) & 4) == 0 || !(unsigned int)sub_CDDC0(a1, *((_QWORD *)v8 + 11))) )
          {
            v8 += 26;
            if ( v8 == v9 )
              goto LABEL_27;
          }
          return 2;
        }
      }
LABEL_27:
      v11 = *(void (__fastcall **)(__int64, _QWORD *))(a1 + 24);
      if ( v11 )
        v11(a1, v2);
      v2 = (_QWORD *)v2[10];
      if ( !v2 )
        return v4;
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, v2);
      if ( v3 )
        return v3 & 2;
    }
    return 2;
  }
}
