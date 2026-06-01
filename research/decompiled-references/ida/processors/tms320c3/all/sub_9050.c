__int64 __fastcall sub_9050(_BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD v4[133]; // [rsp+0h] [rbp-428h] BYREF

  v1 = *(_QWORD *)a1;
  v4[129] = __readfsqword(0x28u);
  (*(void (__fastcall **)(_BYTE *))(v1 + 296))(a1);
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( a1[305] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  v2 = *(_QWORD *)a1;
  if ( a1[256] )
  {
    if ( (char)a1[257] > 2 )
    {
      (*(void (__fastcall **)(_BYTE *, __int64))(v2 + 32))(a1, 44);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
      v2 = *(_QWORD *)a1;
    }
    (*(void (__fastcall **)(_BYTE *, __int64))(v2 + 128))(a1, 0xFFFFFFFFLL);
    qsnprintf();
    add_spaces();
    (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 5);
    if ( a1[257] == 2 )
    {
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      if ( !a1[385] )
        goto LABEL_9;
    }
    else if ( !a1[385] )
    {
LABEL_9:
      if ( a1[425] )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 4);
      }
      v2 = *(_QWORD *)a1;
      if ( a1[465] )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(v2 + 32))(a1, 44);
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 5);
        v2 = *(_QWORD *)a1;
      }
      goto LABEL_13;
    }
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 3);
    goto LABEL_9;
  }
  if ( a1[345] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(v2 + 32))(a1, 44);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
    v2 = *(_QWORD *)a1;
  }
LABEL_13:
  (*(void (__fastcall **)(_BYTE *))(v2 + 320))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

