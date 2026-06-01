__int64 __fastcall sub_5DF20(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+4h] [rbp-3Ch] BYREF
  __int64 v8; // [rsp+8h] [rbp-38h] BYREF
  __int128 v9; // [rsp+10h] [rbp-30h]
  unsigned __int64 v10; // [rsp+20h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  sub_15620(&v8);
  if ( (unsigned int)sub_5ABF0(a1, &v8) == 1
    && (v4 = sub_5AB40(a1), *(_BYTE *)(a1 + 16) = 0, v4 == 1)
    && *(_QWORD *)(a1 + 32)
    && **(_BYTE **)(a1 + 24) == 70 )
  {
    sub_59740((_QWORD *)a1, &v7, a3, nullptr);
    v5 = v7;
  }
  else
  {
    v5 = -1;
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v5;
}

