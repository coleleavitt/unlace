__int64 __fastcall sub_3D8A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // r8d
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 *v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rsi
  __int64 v32; // r11
  _DWORD *v33; // rdx
  __int64 *v34; // rcx
  __int64 *v35; // rdx
  _QWORD *v36; // rcx
  _DWORD *v37; // rdx
  __int64 *v38; // rcx
  __int64 *v39; // rcx
  __int64 *v40; // rdx
  __int64 *v41; // rcx

  if ( a2 == 30 )
  {
    v25 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v39 = *(__int64 **)(a3 + 8);
      v40 = v39 + 1;
      *(_QWORD *)(a3 + 8) = v39 + 1;
      v28 = *v39;
    }
    else
    {
      v26 = *(_QWORD *)(a3 + 16);
      v27 = v25 + 8;
      *(_DWORD *)a3 = v27;
      v28 = *(_QWORD *)(v26 + v25);
      if ( (unsigned int)v27 <= 0x2F )
      {
        v29 = v25 + 16;
        *(_DWORD *)a3 = v29;
        v30 = *(_QWORD *)(v26 + v27);
        if ( (unsigned int)v29 <= 0x2F )
        {
          v31 = v25 + 24;
          *(_DWORD *)a3 = v31;
          v32 = *(_QWORD *)(v26 + v29);
          if ( (unsigned int)v31 <= 0x2F )
          {
            v33 = (_DWORD *)(v31 + v26);
            *(_DWORD *)a3 = v25 + 32;
LABEL_32:
            sub_34340(*(_QWORD *)(a1 + 16), v28, v30, v32, *v33 != 0);
            return 0;
          }
          v33 = *(_DWORD **)(a3 + 8);
LABEL_45:
          *(_QWORD *)(a3 + 8) = v33 + 2;
          goto LABEL_32;
        }
        v41 = *(__int64 **)(a3 + 8);
LABEL_44:
        v33 = v41 + 1;
        *(_QWORD *)(a3 + 8) = v41 + 1;
        v32 = *v41;
        goto LABEL_45;
      }
      v40 = *(__int64 **)(a3 + 8);
    }
    v41 = v40 + 1;
    *(_QWORD *)(a3 + 8) = v40 + 1;
    v30 = *v40;
    goto LABEL_44;
  }
  if ( a2 <= 30 )
  {
    if ( a2 )
    {
      if ( a2 != 11 )
        return 0;
      v18 = *(_DWORD *)a3;
      if ( v18 > 0x2F )
      {
        v19 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v19 + 2;
      }
      else
      {
        v19 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v18);
        *(_DWORD *)a3 = v18 + 8;
      }
      sub_3D3E0(*(_QWORD *)(a1 + 16), *v19 != 0);
      return 0;
    }
    else
    {
      sub_3B4E0(*(_QWORD *)(a1 + 16));
      return 0;
    }
  }
  else
  {
    v4 = a2 - 32;
    if ( v4 > 0x20 )
      return 0;
    v5 = 0x1000006ADLL;
    if ( !_bittest64(&v5, v4) )
    {
      if ( (_DWORD)v4 != 19 )
      {
        if ( (_DWORD)v4 == 16 )
        {
          v6 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v35 = *(__int64 **)(a3 + 8);
            v36 = v35 + 1;
            *(_QWORD *)(a3 + 8) = v35 + 1;
            v9 = *v35;
          }
          else
          {
            v7 = *(_QWORD *)(a3 + 16);
            v8 = v6 + 8;
            *(_DWORD *)a3 = v8;
            v9 = *(_QWORD *)(v7 + v6);
            if ( (unsigned int)v8 <= 0x2F )
            {
              v10 = v6 + 16;
              *(_DWORD *)a3 = v10;
              v11 = *(_QWORD *)(v7 + v8);
              if ( (unsigned int)v10 <= 0x2F )
              {
                v12 = v6 + 24;
                *(_DWORD *)a3 = v12;
                v13 = *(_DWORD *)(v7 + v10);
                if ( (unsigned int)v12 <= 0x2F )
                {
                  v14 = v6 + 32;
                  *(_DWORD *)a3 = v14;
                  v15 = *(_QWORD *)(v7 + v12);
                  if ( (unsigned int)v14 <= 0x2F )
                  {
                    v16 = (_QWORD *)(v14 + v7);
                    *(_DWORD *)a3 = v6 + 40;
                    goto LABEL_13;
                  }
                  v16 = *(_QWORD **)(a3 + 8);
LABEL_40:
                  *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_13:
                  if ( v13 == 67 && *v16 != v15 )
                  {
                    set_sreg_at_next_code(v9, v11, 67);
                    revert_ida_decisions(v9, v11);
                    auto_mark_range(v9, v11, 200);
                  }
                  return 0;
                }
                v38 = *(__int64 **)(a3 + 8);
LABEL_39:
                v16 = v38 + 1;
                *(_QWORD *)(a3 + 8) = v38 + 1;
                v15 = *v38;
                goto LABEL_40;
              }
              v37 = *(_DWORD **)(a3 + 8);
LABEL_38:
              v38 = (__int64 *)(v37 + 2);
              *(_QWORD *)(a3 + 8) = v37 + 2;
              v13 = *v37;
              goto LABEL_39;
            }
            v36 = *(_QWORD **)(a3 + 8);
          }
          v37 = v36 + 1;
          *(_QWORD *)(a3 + 8) = v36 + 1;
          v11 = *v36;
          goto LABEL_38;
        }
        return 0;
      }
      v20 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(__int64 **)(a3 + 8);
        v24 = v34 + 1;
        *(_QWORD *)(a3 + 8) = v34 + 1;
        v23 = *v34;
      }
      else
      {
        v21 = *(_QWORD *)(a3 + 16);
        v22 = v20 + 8;
        *(_DWORD *)a3 = v22;
        v23 = *(_QWORD *)(v21 + v20);
        if ( (unsigned int)v22 <= 0x2F )
        {
          v24 = (__int64 *)(v22 + v21);
          *(_DWORD *)a3 = v20 + 16;
LABEL_25:
          sub_34430(*(_QWORD *)(a1 + 16), v23, *v24);
          return 0;
        }
        v24 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v24 + 1;
      goto LABEL_25;
    }
    invalidate_regfinder_cache(-1, -1, 0);
    return 0;
  }
}
