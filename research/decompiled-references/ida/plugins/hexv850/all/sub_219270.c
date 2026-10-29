__int64 __fastcall sub_219270(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rbp
  int v6; // eax
  __int64 v7; // r13
  int v8; // ebp
  __int64 v9; // rdx
  int v10; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 5) & 0x10) != 0 )
  {
    result = sub_227E70(a1, v11, &v10, 0);
    if ( (_BYTE)result )
    {
      v9 = v11[0];
      *(_BYTE *)(a2 + 8) = 5;
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v10;
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 64);
    if ( !v2 )
      sub_2169A0();
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)(v2 - 1));
    if ( *(_DWORD *)(v3 + 76) == 1
      && (v5 = (_QWORD *)(v3 + 160), !(unsigned __int8)sub_5FE00((_QWORD *)(v3 + 160)))
      && (v6 = sub_5FEE0(v5, 0), v7 = v6, (v8 = sub_60120(v5, v6)) != 0)
      && v8 <= (int)sub_12ED30(*(_DWORD **)(a1 + 1504), nullptr, v7, 0x7FFFFFFFu) )
    {
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = v7;
      *(_DWORD *)(a2 + 12) = v8;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

