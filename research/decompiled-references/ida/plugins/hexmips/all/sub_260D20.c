unsigned __int64 __fastcall sub_260D20(void (__fastcall ***a1)(_QWORD, _QWORD, void *, _BYTE *), __int64 a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  void (__fastcall **v6)(_QWORD, _QWORD, void *, _BYTE *); // r8
  _BYTE v8[19]; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+33h] [rbp-25h] BYREF
  char v10; // [rsp+34h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v2 = *(int *)(a2 + 16);
  v11 = __readfsqword(0x28u);
  tag_addr();
  v3 = v8;
  v4 = nullptr;
  while ( 1 )
  {
    v5 = *v4++;
    *v3 = v5;
    if ( !(_BYTE)v5 )
      break;
    if ( ++v3 == &v9 )
    {
      v9 = 0;
      goto LABEL_5;
    }
  }
  if ( v3 >= &v10 )
    sub_25ADD0(0, v2, v5, &v9);
LABEL_5:
  v6 = *a1;
  *v3 = 0;
  (*v6)(a1, 0, &unk_3FD0D2, v8);
  return v11 - __readfsqword(0x28u);
}

