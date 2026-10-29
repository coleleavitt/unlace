unsigned __int64 __fastcall sub_2655A0(void (__fastcall ***a1)(_QWORD, _QWORD, void *, _BYTE *))
{
  char *v1; // rbx
  char *v2; // rax
  char v3; // dl
  void (__fastcall **v4)(_QWORD, _QWORD, void *, _BYTE *); // r8
  _BYTE v6[19]; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+33h] [rbp-25h] BYREF
  char v8; // [rsp+34h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  tag_addr();
  v1 = v6;
  v2 = nullptr;
  while ( 1 )
  {
    v3 = *v2++;
    *v1 = v3;
    if ( !v3 )
      break;
    if ( ++v1 == &v7 )
    {
      v7 = 0;
      goto LABEL_5;
    }
  }
  if ( v1 >= &v8 )
    sub_25F650(0.0);
LABEL_5:
  v4 = *a1;
  *v1 = 0;
  (*v4)(a1, 0, &unk_4190BD, v6);
  return v9 - __readfsqword(0x28u);
}

