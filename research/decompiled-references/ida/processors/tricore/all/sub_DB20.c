__int64 __fastcall sub_DB20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  char v5; // al
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 864);
  v6[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 40LL * (int)a2 + 1) )
  {
    if ( *(_WORD *)(a1 + 40) == 69 && *(_BYTE *)(a1 + 49) == 7 )
    {
      v3 = same_value_jpt(a1, a1 + 56, a2);
      if ( (_BYTE)v3 )
      {
        v5 = *(_BYTE *)(a1 + 97);
        if ( v5 == 1 )
        {
          if ( (unsigned int)sub_BE80(
                               *(_QWORD *)(a1 + 888),
                               (__int64)v6,
                               nullptr,
                               nullptr,
                               nullptr,
                               nullptr,
                               nullptr,
                               *(_QWORD *)(a1 + 32),
                               *(unsigned __int16 *)(a1 + 102),
                               0)
            && v6[0] <= 0xFFFFu )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v6[0];
            goto LABEL_10;
          }
        }
        else if ( v5 == 5 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 104);
LABEL_10:
          *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(a1 + 152) + 16LL * *(_QWORD *)(a1 + 16);
          return v3;
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 792) = 1;
  }
  return 0;
}

