__int64 __fastcall sub_3E3D30(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v4 = sub_154850(a2, &v12, 0);
  if ( !(_BYTE)v4 || (_WORD)v12 )
    return 0;
  v7 = *(_DWORD *)(a2 + 4);
  v5 = v4;
  if ( (unsigned __int8)sub_154850(a3, v13, 0) )
  {
    v8 = v13[0];
    v9 = -32768;
    if ( (unsigned __int64)(8 * v7) <= 0x3F )
      v9 = (1LL << (8 * (unsigned __int8)v7)) - 0x8000;
    if ( (v9 & v13[0]) != 0 && (v9 & v13[0]) != v9 )
      return 0;
LABEL_10:
    *a1 = v12 + v8;
    return v5;
  }
  if ( *(_BYTE *)a3 == 4 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( *(_DWORD *)v10 == 8 && *(_DWORD *)(v10 + 36) == 2 )
    {
      if ( (unsigned __int8)sub_154850(v10 + 32, v13, 0)
        || *(_BYTE *)(v10 + 32) == 4
        && (v11 = *(_DWORD **)(v10 + 40), *v11 == 10)
        && (unsigned __int8)sub_154850((__int64)(v11 + 8), v13, 0) )
      {
        v8 = sub_325150(v13[0], 2, 1);
        goto LABEL_10;
      }
    }
  }
  return 0;
}

