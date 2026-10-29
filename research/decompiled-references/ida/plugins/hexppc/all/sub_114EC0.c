__int64 __fastcall sub_114EC0(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // r15
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v19[3] = __readfsqword(0x28u);
  v7 = sub_118EA0(a4, &v17, 11);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( *(_BYTE *)(v7 + 32) != 4 )
    return 0;
  v10 = *(_DWORD **)(v7 + 40);
  if ( *v10 != 14 || (unsigned __int64)*(int *)(v17 + 4) > 7 )
    return 0;
  if ( *(_BYTE *)v17 == 4 )
  {
    if ( !(unsigned __int8)sub_11CB60(*(_QWORD *)(v17 + 8), a1, 0) )
    {
      v10 = *(_DWORD **)(v8 + 40);
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v11 = sub_118E60(v10, &v18);
  if ( !v11 )
    return 0;
  v12 = v18;
  if ( *(_BYTE *)v18 == 4 )
  {
    v16 = *((_DWORD **)v18 + 1);
    if ( (unsigned int)(*v16 - 8) <= 1 )
    {
      v12 = v16 + 8;
      v18 = v16 + 8;
    }
  }
  if ( !(unsigned __int8)sub_121B90(v17, a1, v12, 1)
    && (!a2 || !(unsigned __int8)sub_12B040(a1, a2, a3, v17, a3, (_DWORD)v18, 1)) )
  {
    return 0;
  }
  v13 = sub_326890(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), *(unsigned int *)(v11 + 4), 0);
  v14 = 8 * *(_DWORD *)(v17 + 4);
  if ( (unsigned __int64)v14 <= 0x3F )
    v13 += 1LL << v14;
  sub_11CFD0(v11, a1, v13, *(unsigned int *)(v11 + 4), -1, 0);
  *a4 = 11;
  v15 = *(_DWORD *)(v8 + 4);
  v19[1] = 0;
  a4[1] = v15;
  v19[0] = 0xFFFFFFFF00000000LL;
  sub_118FD0(v19, v8 + 32);
  sub_118FD0(a4 + 8, v19);
  sub_119360(a4 + 12);
  sub_119360(v19);
  return 1;
}

