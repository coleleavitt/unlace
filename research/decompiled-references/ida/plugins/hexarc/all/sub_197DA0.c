__int64 __fastcall sub_197DA0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rax
  unsigned __int8 *v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( *a3 != 12 )
    return 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !(unsigned __int8)sub_197D00(a1, (_QWORD *)(a1 + 24), v9, (__int64)a3) )
    goto LABEL_6;
  if ( !sub_11F4A0(v9[0], *(_QWORD *)(a1 + 24), 0) )
  {
    if ( *v9[0] == 4 )
    {
      v6 = *((_QWORD *)v9[0] + 1);
      if ( *(_DWORD *)v6 == 12 )
      {
        v7 = sub_11F4A0((unsigned __int8 *)(v6 + 32), *(_QWORD *)(a1 + 24), 0);
        v8 = *((_QWORD *)v9[0] + 1);
        if ( v7 )
        {
          *(_QWORD *)(a1 + 32) = v8 + 48;
          goto LABEL_9;
        }
        if ( sub_11F4A0((unsigned __int8 *)(v8 + 48), *(_QWORD *)(a1 + 24), 0) )
        {
          *(_QWORD *)(a1 + 32) = *((_QWORD *)v9[0] + 1) + 32LL;
          goto LABEL_9;
        }
        return 0;
      }
    }
LABEL_6:
    v5 = sub_116220((__int64)a3, v9, 12);
    if ( v5
      && (unsigned __int8)sub_197D00(a1, (_QWORD *)(a1 + 24), (_QWORD *)(a1 + 32), v5)
      && sub_11F4A0(v9[0], *(_QWORD *)(a1 + 24), 0) )
    {
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  return 1;
}

