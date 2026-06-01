__int64 __fastcall sub_4C350(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r13
  char v4; // al
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  int v7; // eax
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r12
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( *(_QWORD *)(a1 + 424) == -1 )
    {
      v7 = *(_DWORD *)(a1 + 972);
      if ( v7 != -1 )
      {
        *(_DWORD *)(a1 + 964) = v7;
        *(_DWORD *)(*(_QWORD *)(a1 + 376) + 64LL) = *(_DWORD *)(a1 + 976);
        *(_BYTE *)(*(_QWORD *)(a1 + 376) + 68LL) = *(_BYTE *)(a1 + 980);
      }
    }
    if ( (unsigned __int8)sub_4BDC0(a1) )
      return 0;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 81LL) )
      return 0;
    v1 = sub_4C230(a1);
    if ( !(_BYTE)v1 )
      return 0;
    v3 = *(_QWORD *)(a1 + 864);
    v4 = *(_BYTE *)(v3 + 112);
    if ( (v4 & 2) != 0 && *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) != 255 )
      return 0;
    v5 = *(_QWORD *)(a1 + 864);
    if ( (v4 & 1) != 0 )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
      v5 = *(_QWORD *)(a1 + 864);
    }
    v6 = *(_BYTE *)(v5 + 5);
    if ( v6 )
    {
      if ( v6 <= 0xF9u )
        goto LABEL_19;
      if ( v6 < 0xFBu )
      {
        v14 = 3;
      }
      else
      {
        switch ( v6 )
        {
          case 0xFB:
            v14 = 7;
            break;
          case 0xFC:
            v14 = 15;
            break;
          case 0xFD:
            v14 = 31;
            break;
          case 0xFE:
            v14 = 63;
            break;
          case 0xFF:
            v14 = 127;
            break;
        }
      }
    }
    else
    {
      v14 = 255;
    }
    if ( v14 < *(unsigned __int16 *)(*(_QWORD *)(a1 + 376) + 4LL) )
    {
      *(_BYTE *)(a1 + 792) = 1;
      return 0;
    }
LABEL_19:
    if ( *(_BYTE *)(v5 + 41) && *(_QWORD *)(v5 + 48) == 1 )
    {
      v17 = *(_QWORD **)(a1 + 840);
      v18 = *(_QWORD *)(a1 + 848);
      v19 = *(_QWORD *)(v3 + 96);
      v20 = &v17[v18];
      if ( v17 == v20 )
        goto LABEL_44;
      v21 = *(_QWORD **)(a1 + 840);
      while ( v19 != *v21 )
      {
        if ( v20 == ++v21 )
          goto LABEL_44;
      }
      if ( v21 == v20 )
      {
LABEL_44:
        if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v18 + 1) )
        {
          v22 = qvector_reserve();
          v23 = *(_QWORD *)(a1 + 848);
          *(_QWORD *)(a1 + 840) = v22;
          v20 = (_QWORD *)(v22 + 8 * v23);
        }
        *v20 = v19;
        ++*(_QWORD *)(a1 + 848);
      }
    }
    else
    {
      v8 = *(_QWORD **)(a1 + 816);
      v9 = *(_QWORD *)(a1 + 824);
      v10 = *(_QWORD *)(a1 + 32);
      v11 = &v8[v9];
      if ( v8 == v11 )
        goto LABEL_35;
      v12 = *(_QWORD **)(a1 + 816);
      while ( v10 != *v12 )
      {
        if ( v11 == ++v12 )
          goto LABEL_35;
      }
      if ( v11 == v12 )
      {
LABEL_35:
        if ( *(_QWORD *)(a1 + 832) < (unsigned __int64)(v9 + 1) )
        {
          v15 = qvector_reserve();
          v16 = *(_QWORD *)(a1 + 824);
          *(_QWORD *)(a1 + 816) = v15;
          v11 = (_QWORD *)(v15 + 8 * v16);
        }
        *v11 = v10;
        ++*(_QWORD *)(a1 + 824);
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v3 + 104);
    v13 = *(_QWORD *)(a1 + 944);
    if ( v13 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL) & -v13;
      *(_BYTE *)(a1 + 519) = 1;
    }
    return v1;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_4C680(10319);
}

