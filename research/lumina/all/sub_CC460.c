__int64 (__fastcall *__fastcall sub_CC460(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall *result)(); // rax
  char v5; // al
  __int64 v6; // rdi
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  char v11; // al

  sub_C9E70(*(_QWORD *)(a1 + 64), a2);
  *(_QWORD *)(a1 + 64) = 0;
  sub_CA000(a1, a2);
  v3 = *(_QWORD *)(a1 + 296);
  if ( v3 )
  {
    sub_CC410(v3);
    *(_BYTE *)(a1 + 21) = 0;
    goto LABEL_3;
  }
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v6 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)v6 )
    {
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) & 0x800) != 0
        && (*(_BYTE *)(a1 + 9) & 5) == 1
        || (v7 = *(__int64 **)(a1 + 80), (v8 = *v7) == 0) )
      {
LABEL_16:
        v9 = *(_QWORD *)(a1 + 72);
        if ( *(_QWORD *)v9 )
        {
          if ( *(_BYTE *)(a1 + 17) )
          {
            v11 = *(_BYTE *)(a1 + 16);
            if ( *(_BYTE *)(a1 + 22) != 5 )
              *(_BYTE *)(a1 + 22) = 0;
            *(_BYTE *)(a1 + 23) = v11;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, 0);
            if ( *(_BYTE *)(a1 + 22) != 5 )
              *(_BYTE *)(a1 + 22) = 0;
            *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
            if ( v10 && *(_BYTE *)(a1 + 21) == 6 )
              *(_BYTE *)(a1 + 22) = 5;
          }
          goto LABEL_23;
        }
LABEL_28:
        *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
LABEL_23:
        *(_BYTE *)(a1 + 21) = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v7 = *(__int64 **)(a1 + 80);
      v8 = *v7;
      if ( !*v7 )
        goto LABEL_28;
    }
    (*(void (__fastcall **)(__int64 *))(v8 + 8))(v7);
    *v7 = 0;
    goto LABEL_16;
  }
LABEL_3:
  result = (__int64 (__fastcall *)())*(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(a1 + 21) = **(_QWORD **)(a1 + 80) == 0;
    }
    else
    {
      sub_CBBE0(a1);
      *(_BYTE *)(a1 + 23) = 0;
      *(_BYTE *)(a1 + 21) = 0;
    }
    if ( *(_BYTE *)(a1 + 27) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 144LL))(*(_QWORD *)(a1 + 72), 0, 0);
      v5 = *(_BYTE *)(a1 + 27);
      *(_DWORD *)(a1 + 48) = 0;
      if ( v5 )
      {
        result = sub_10F6E0;
        *(_QWORD *)(a1 + 272) = sub_10F6E0;
        goto LABEL_9;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 48) = 0;
    }
    result = sub_10F3A0;
    *(_QWORD *)(a1 + 272) = sub_10F3A0;
  }
LABEL_9:
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return result;
}
