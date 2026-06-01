__int64 __fastcall sub_14C880(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  _BYTE *v11; // rdi
  _BYTE *v12; // rbp
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+8h] [rbp-B0h]
  _BYTE v18[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v19; // [rsp+28h] [rbp-90h]
  _QWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v22[11]; // [rsp+60h] [rbp-58h] BYREF

  v22[3] = __readfsqword(0x28u);
  if ( (a4 & 8) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(a3 + 68) < *(_DWORD *)(v4 + 84) && *(int *)(a3 + 36) <= 16 )
    return 0;
  v7 = *(_QWORD *)(a3 + 40);
  if ( (*(_BYTE *)(v7 + 4) & 0x10) != 0 || !a2 && (*(_BYTE *)(a1 + 605) & 0x40) != 0 )
    return 0;
  v8 = *(_QWORD *)(a3 + 40);
  v20[0] = 0xFFFFFFFF00000000LL;
  v20[1] = 0;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  v19 = 0;
  sub_1207E0((__int64)v18, v8);
  v9 = 11 - *(unsigned __int8 *)(a1 + 145);
  v10 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a1 + 605) & 0x40) != 0 )
  {
    if ( v10 == v9 )
    {
      v11 = (_BYTE *)v7;
      v12 = v18;
      if ( !v7 )
        goto LABEL_11;
    }
    else
    {
      v12 = v18;
      v11 = v18;
    }
  }
  else if ( v10 == v9 )
  {
    v11 = (_BYTE *)v7;
    v12 = nullptr;
    if ( !v7 )
      goto LABEL_14;
  }
  else
  {
    v12 = nullptr;
    v11 = v18;
  }
  if ( !(unsigned __int8)sub_127FE0((__int64)v11, v4, *(_DWORD *)(a3 + 36) - *(_DWORD *)(a3 + 68)) )
    goto LABEL_24;
  if ( v12 )
  {
LABEL_11:
    v13 = *(_DWORD *)(a3 + 68);
    v17 = 0;
    *((_DWORD *)v12 + 17) = v13;
    v16 = qvector_reserve();
    *(_QWORD *)(v16 + 8 * v17) = v12;
    *(_QWORD *)&v17 = v17 + 1;
    if ( !sub_A0040(a2, a3, (__int64)&v16) )
    {
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      goto LABEL_14;
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
LABEL_24:
    v14 = 0;
    goto LABEL_15;
  }
LABEL_14:
  *(_DWORD *)(v7 + 68) = *(_DWORD *)(a3 + 68);
  *(_DWORD *)a3 = 4;
  v14 = 1;
LABEL_15:
  sub_1181E0((__int64)v22);
  sub_1181E0((__int64)v21);
  sub_1181E0((__int64)v20);
  return v14;
}

