unsigned __int64 sub_38E60(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v9; // rax
  const char *v10; // r13
  __int64 v11; // rsi
  __int64 *v12; // rdi
  __int16 v13; // dx
  __int64 v14; // rax
  gcc_va_list va; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+48h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]

  va_start(va, a3);
  v17 = va_arg(va, _QWORD);
  v18 = va_arg(va, _QWORD);
  v3 = v18;
  v19 = va_arg(va, _QWORD);
  v4 = v19;
  va_end(va);
  v16 = __readfsqword(0x28u);
  if ( byte_6ACE9 )
  {
    va_start(va, a3);
    v9 = *(_QWORD *)(a1 + 224);
    if ( *(_DWORD *)(a1 + 208) == a2 )
    {
      if ( a2 )
      {
        if ( v9 > 1 )
        {
          v12 = (__int64 *)(a1 + 216);
LABEL_20:
          sub_1A320(v12);
          goto LABEL_7;
        }
LABEL_13:
        v10 = "> ";
        v11 = *(_QWORD *)(a1 + 216);
        if ( a2 != 1 )
          v10 = "< ";
        v12 = (__int64 *)(a1 + 216);
        if ( *(_QWORD *)(a1 + 232) <= 2u )
        {
          v14 = qvector_reserve();
          v12 = (__int64 *)(a1 + 216);
          *(_QWORD *)(a1 + 216) = v14;
          v11 = v14;
        }
        *(_QWORD *)(a1 + 224) = 3;
        v13 = *(_WORD *)v10;
        *(_BYTE *)(v11 + 2) = 0;
        **(_WORD **)(a1 + 216) = v13;
        goto LABEL_20;
      }
      if ( v9 <= 1 )
        goto LABEL_6;
    }
    else if ( v9 <= 1 )
    {
      if ( !a2 )
      {
LABEL_6:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(23, a3, va, &callui, v3, v4);
LABEL_7:
        *(_DWORD *)(a1 + 208) = a2;
        return v16 - __readfsqword(0x28u);
      }
      goto LABEL_13;
    }
    sub_DBE0((__int64)"%s\n", *(const char **)(a1 + 216));
    if ( *(_QWORD *)(a1 + 240) )
    {
      sub_38010();
      qflush();
    }
    *(_QWORD *)(a1 + 224) = 0;
    if ( !a2 )
      goto LABEL_6;
    goto LABEL_13;
  }
  return v16 - __readfsqword(0x28u);
}

