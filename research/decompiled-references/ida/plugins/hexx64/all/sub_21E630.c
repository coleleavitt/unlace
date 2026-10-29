__int64 __fastcall sub_21E630(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbp
  int v7; // eax
  __int64 v8; // r13
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 5) & 0x10) != 0 )
  {
    result = sub_22D230(a1, v12, &v11, 0);
    if ( (_BYTE)result )
    {
      v10 = v12[0];
      *(_BYTE *)(a2 + 8) = 5;
      *(_QWORD *)a2 = v10;
      *(_DWORD *)(a2 + 12) = v11;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( !v3 )
      sub_21BD60(a3);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)(v3 - 1));
    if ( *(_DWORD *)(v4 + 76) == 1
      && (v6 = (_QWORD *)(v4 + 160), !(unsigned __int8)sub_64880((_QWORD *)(v4 + 160)))
      && (v7 = sub_64960(v6, 0), v8 = v7, (v9 = sub_64BA0(v6, v7)) != 0)
      && v9 <= (int)sub_1338F0(*(_DWORD **)(a1 + 1504), nullptr, v8, 0x7FFFFFFFu) )
    {
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = v8;
      *(_DWORD *)(a2 + 12) = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

